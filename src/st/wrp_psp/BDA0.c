#include "../wrp/wrp.h"

INCLUDE_ASM("st/wrp_psp/psp/wrp_psp/BDA0", EntityRoomForeground);

INCLUDE_ASM("st/wrp_psp/psp/wrp_psp/BDA0", DestroyEntity);

void PreventEntityFromRespawning(Entity* entity) {
    if (entity->entityRoomIndex) {
        u16 index = entity->entityRoomIndex - 1 >> 5;
        g_unkGraphicsStruct.D_80097428[index] |=
            1 << ((entity->entityRoomIndex - 1) & 0x1F);
    }
}
