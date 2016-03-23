import QtQuick 2.0


//Canvas {
//    id: mycanvas
//    width: 600
//    height: 900
//    onPaint: {
//        var ctx = getContext("2d");
//        ctx.fillStyle = Qt.rgba(1, 0, 0, 1);
//        ctx.fillRect(0, 0, width, height);
//    }
//}


Canvas {
    id: mycanvas
    // canvas size
    width: 600; height: 600
    // handler to override for drawing
    onPaint: {
        // get context to draw with
        var ctx = getContext("2d")
        // setup the stroke
        ctx.lineWidth = 4
        ctx.strokeStyle = "green"
        // setup the fill
        ctx.fillStyle = "grey"
        // begin a new path to draw
        ctx.beginPath()
        // top-left start point
        ctx.moveTo(50,50)
        // upper line
        ctx.lineTo(150,50)
        // right line
        ctx.lineTo(150,150)
        // bottom line
        ctx.lineTo(50,150)
        // left line through path closing
        ctx.closePath()
        // fill using fill style
        ctx.fill()
        // stroke using line width and stroke style
        ctx.stroke()
    }
}
