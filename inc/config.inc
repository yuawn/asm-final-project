;    :D

WINDOW_WIDTH            EQU     1240
WINDOW_HEIGHT           EQU     720

ENEMY_AMOUNT            EQU     20
BULLET_AMOUNT           EQU     10

WEAPON_SPEED            EQU     f16_0
WEAPON_RADIUS           EQU     f5_0
WEAPON_INIT_AD          EQU     200
WEAPON_CD               EQU     f0_5
WEAPON_CD_sd            EQU     d0_5


asm_HEAD                EQU     f40_0
asm_LEN                 EQU     f70_0
asm_up_rd               EQU     f12_0
asm_dn_rd               EQU     f16_0
in_rd                   EQU     f3_0
ot_rd                   EQU     f20_0

Enemy_init_now_blood    EQU     1000
Enemy_init_blood        EQU     1000



;Mao  OAO!!!
extern  main , aaa , bullet , now_bullet ,aplayer , adirection , anextStep , vec3z
;.h .hpp
EXTERN  glewExperimental
;GLFWwindow*
EXTERN  window

;GLuint
EXTERN  TextureID , MatrixID , programID

;FLOAT
;EXTERN  WEAPON_SPEED , WEAPON_RADIUS