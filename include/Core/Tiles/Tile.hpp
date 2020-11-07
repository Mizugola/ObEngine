#include <cstdint>

namespace obe::Tiles
{
    struct TileInfo
    {
        bool flippedHorizontally = false;
        bool flippedVertically = false;
        bool flippedDiagonally = false;
        uint32_t tileId = 0;
    };

    TileInfo getTileInfo(uint32_t tileId);
    uint32_t stripTileFlags(uint32_t tileId);
}