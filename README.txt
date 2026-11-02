FREEDIVER'S ADVENTURES DANGEROUS - CASIO LOOPY
Etapa 3: prototipo da lógica de jogo (C portátil)

CONTEÚDO
- game_logic.h: estruturas, entradas e interface da lógica.
- game_logic.c: movimento, limites da tela, coleta, pontuação, inimigos,
  vidas, pausa e consumo de ar.

IMPORTANTE
Este é um protótipo portátil da lógica do jogo, NÃO é um ROM Casio Loopy e
NÃO deve ser renomeado para .bin. Ainda faltam a camada gráfica/VDP, leitura
real do controle, áudio, inicialização do SH-1, linker script, empacotamento
no formato de cartucho e testes no emulador/hardware.

ALVO TÉCNICO
Casio Loopy usa CPU Hitachi SH-1 (SH7021). A resolução e o modo gráfico
precisam ser confirmados durante a integração com o VDP. O código usa uma
área lógica de jogo de 256x224 como ponto de partida.

PRÓXIMA INTEGRAÇÃO
1. Implementar backend de vídeo/VDP e desenhar sprites e tiles.
2. Mapear o controle físico para GameInput.
3. Integrar temporização por VBlank e áudio.
4. Configurar compilador SH-1, linker e imagem de cartucho.
5. Testar no CLoopy/MAME; só então validar a imagem BIN.

CONTROLES DO PROTÓTIPO (abstração)
move_x: -1 esquerda, +1 direita
move_y: -1 cima, +1 baixo
action: botão A
flashlight: botão B
pause: Start
