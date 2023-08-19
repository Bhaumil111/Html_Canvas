const canvas = document.getElementById('canvas1');
const ctx = canvas.getContext('2d');
canvas.height = window.innerHeight;
canvas.width = window.innerWidth;
const particleArray = [];
let hue = 0;



const mouse = {
    x: undefined,
    y: undefined,
   

}
canvas.addEventListener('click',function(event){
    mouse.x = event.x;
    mouse.y = event.y;
    for(let i = 0;i<10;i++){
    particleArray.push(new Particle());
    }
})
canvas.addEventListener('mousemove',function(event){
    mouse.x = event.x;
    mouse.y = event.y;
    


        particleArray.push(new Particle());
        
    
})

window.addEventListener('resize', function () {
    canvas.height = window.innerHeight;
    canvas.width = window.innerWidth;

})

class Particle {
    constructor() {
        this.x = mouse.x;
        this.y = mouse.y;
        // this.x = Math.random() * canvas.width;
        // this.y = Math.random() * canvas.height;
        this.size = Math.random() * 10+ 1;
        this.speedX = Math.random() * 3 - 1.5;
        this.speedY = Math.random() * 3 - 1.5;
        this.color = 'hsl( '+hue+',100%,50%)';
    }
    update() {
        this.x += this.speedX;
        this.y += this.speedY;
        if (this.size > 0.2) this.size -= 0.1;
    }
    draw() {
        ctx.fillStyle = this.color;
        ctx.beginPath();
        ctx.arc(this.x, this.y, this.size, 0, Math.PI * 2);
        ctx.fill();

    }
}

// function init() {
//     for (let i = 0; i < 121; i++) {
//         particleArray.push(new Particle());
//     }
// }

// init();
function handleParticles() {
    for (let i = 0; i < particleArray.length; i++) {
        particleArray[i].update();
        particleArray[i].draw();
        for(let j = i;j<particleArray.length;j++){
            const dx = particleArray[i].x - particleArray[j].x;
            const dy = particleArray[i].y - particleArray[j].y;
            const dist = Math.sqrt(dx*dy + dy*dy);
            if(dist<100){
                ctx.beginPath();
                ctx.strokeStyle = particleArray[i].color;
            
                ctx.moveTo(particleArray[i].x,particleArray[i].y);
                ctx.lineTo(particleArray[j].x , particleArray[j].y);
                ctx.stroke();
            }
        }
        if (particleArray[i].size <= 0.3) {
            particleArray.splice(i, 1);
            console.log(particleArray.length);
            i--;
        }
    }
}
function animate() {
    // ctx.clearRect(0, 0, canvas.width, canvas.height);

    ctx.fillStyle = 'rgba(0,0,0,1)';
    ctx.fillRect(0,0, canvas.width,canvas.height);
    handleParticles();
    hue+=10;
    requestAnimationFrame(animate);
}
animate();