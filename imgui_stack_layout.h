#pragma once

#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"

namespace ImGuiInternal
{
    ImGuiLayoutType GetCurrentLayoutType(ImGuiID window_id);
    void            UpdateItemRect(ImGuiID window_id, const ImVec2& min, const ImVec2& max);

}

namespace ImGui {
    inline ImVec2 operator+(const ImVec2& lhs, const ImVec2& rhs) {
        return ImVec2(lhs.x + rhs.x, lhs.y + rhs.y);
    }

    inline ImVec2 operator-(const ImVec2& lhs, const ImVec2& rhs) {
        return ImVec2(lhs.x - rhs.x, lhs.y - rhs.y);
    }

    inline ImVec2 operator*(const ImVec2& lhs, float scalar) {
        return ImVec2(lhs.x * scalar, lhs.y * scalar);
    }

    inline ImVec2 operator/(const ImVec2& lhs, float scalar) {
        return ImVec2(lhs.x / scalar, lhs.y / scalar);
    }

    inline ImVec2& operator+=(ImVec2& lhs, const ImVec2& rhs) {
        lhs.x += rhs.x;
        lhs.y += rhs.y;
        return lhs;
    }

    inline ImVec2& operator-=(ImVec2& lhs, const ImVec2& rhs) {
        lhs.x -= rhs.x;
        lhs.y -= rhs.y;
        return lhs;
    }

    inline ImVec2& operator*=(ImVec2& lhs, float scalar) {
        lhs.x *= scalar;
        lhs.y *= scalar;
        return lhs;
    }

    inline ImVec2& operator/=(ImVec2& lhs, float scalar) {
        lhs.x /= scalar;
        lhs.y /= scalar;
        return lhs;
    }
    static float LayoutAlign = 0.5f;

    void BeginHorizontal(const char* str_id, const ImVec2& size = ImVec2(0, 0), float align = -1.0f);
    void BeginHorizontal(const void* ptr_id, const ImVec2& size = ImVec2(0, 0), float align = -1.0f);
    void BeginHorizontal(int id, const ImVec2& size = ImVec2(0, 0), float align = -1);
    void EndHorizontal();
    void BeginVertical(const char* str_id, const ImVec2& size = ImVec2(0, 0), float align = -1.0f);
    void BeginVertical(const void* ptr_id, const ImVec2& size = ImVec2(0, 0), float align = -1.0f);
    void BeginVertical(int id, const ImVec2& size = ImVec2(0, 0), float align = -1);
    void EndVertical();
    void Spring(float weight = 1.0f, float spacing = -1.0f);
    void SuspendLayout();
    void ResumeLayout();

}