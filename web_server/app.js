const edgeMultiplay = require('edge-multiplay')()

edgeMultiplay.wsServer.on('newConnection',(path, connection)=>{
    edgeMultiplay.addToLobby(connection)
})