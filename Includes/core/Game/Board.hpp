#pragma once

#include <array>
#include <cstdint>
#include <iostream>

namespace BOJ
{
class Board final
{
 public:
    static constexpr int BOARD_WIDTH = 14;
    static constexpr int BOARD_HEIGHT = 8;
    static constexpr int BOARD_SIZE = BOARD_HEIGHT * BOARD_WIDTH;

    using Matrix = std::array<std::uint8_t, BOARD_SIZE>;

 public:
    Board() = default;
    Board(Matrix board);
    Board(const Board&) = default;
    Board(Board&&) = default;

    Board& operator=(const Board&) = default;
    Board& operator=(Board&&) = default;

    std::uint8_t At(int x, int y) const;
    std::uint8_t At(int index) const;

    void SetValue(int x, int y, int value);
    void SetValue(int index, int value);

    int GetScore() const;

    void Update(const Matrix& board);
    const Matrix& GetBoard() const;

 private:
    static constexpr int pointToIndex(int x, int y)
    {
        return x + y * BOARD_WIDTH;
    }

 private:
    Matrix board_;
};

std::ostream& operator<<(std::ostream& os, const Board& board);
}  // namespace BOJ
