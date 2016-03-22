import QtQuick 2.0


Canvas {
    id: mycanvas
    width: 1000
    height: 1200
    onPaint: {
        var ctx = getContext("2d");
        ctx.fillStyle = Qt.rgba(1, 0, 0, 1);
        ctx.fillRect(0, 0, width, height);
    }
}

