

const char32_t ESU[] = {
    0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000,
    0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xffffff, 0xff0000, 0xff0000, 0xffffff, 0xff0000,
    0xff0000, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xff0000, 0xff0000, 0xffffff, 0xff0000,
    0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xffffff, 0xff0000, 0xff0000, 0xffffff, 0xff0000,
    0xff0000, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xff0000, 0xffffff, 0xff0000, 0xff0000, 0xffffff, 0xff0000,
    0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xff0000, 0xff0000,
    0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000,
    0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000,
    0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000,
    0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000,
    0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0x999999, 0x999999, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000,
    0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0x000000, 0x000000, 0x999999, 0x999999, 0x999999, 0x999999, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000,
    0xff0000, 0xff0000, 0xffffff, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x999999, 0x999999, 0x999999, 0x999999, 0xffffff, 0xffffff, 0xff0000, 0xff0000,
    0xff0000, 0xffffff, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x999999, 0x999999, 0x999999, 0x999999, 0xffffff, 0xffffff, 0xff0000,
    0xffffff, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x999999, 0x999999, 0x999999, 0x999999, 0xffffff, 0xffffff,
    0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x999999, 0x999999, 0x999999, 0x999999, 0xffffff};

const char32_t NCC[] = {
    0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF,
    0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF,
    0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF,
    0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF,
    0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF,
    0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF,
    0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF,
    0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF,
    0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF,
    0x0000FF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0x0000FF,
    0x0000FF, 0x0000FF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0x0000FF, 0x0000FF,
    0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF,
    0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF,
    0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF,
    0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF,
    0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0xFFFFFF, 0xFFFFFF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF, 0x0000FF};

const char32_t CLEAR_PATH[] = {
    0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0xffffff, 0x000000, 0xffffff, 0xffffff, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0x000000, 0xffffff, 0x000000, 0xffffff, 0xffffff, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0x000000, 0xffffff, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0x000000, 0xffffff, 0x000000, 0xffffff, 0xffffff, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0x000000, 0xffffff, 0x000000, 0xffffff, 0xffffff, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0xff0000, 0x000001, 0x000001, 0xff0000, 0xff0000, 0xff0000, 0x000001, 0xff0000, 0x000001, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0xffffff, 0xffffff, 0x000000, 0x000000, 0xff0000, 0xff0000, 0xff0000, 0x000000, 0x000000, 0xff0000, 0x000001, 0x000001, 0xff0000, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0xff0000, 0xffffff, 0xff0000, 0x000001, 0x000001, 0x000001, 0xff0000, 0x000001, 0xff0000, 0xff0000, 0xff0000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0xff0000, 0x000000, 0xff0000, 0xff0000, 0xff0000, 0x000001, 0xff0000, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0xff0000, 0xff0000, 0xff0000, 0x000001, 0xff0000, 0xff0000, 0xff0000, 0x000001, 0xff0000, 0x000001, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0xffffff, 0x000000, 0xff0000, 0xff0000, 0xff0000, 0x000000, 0x000000, 0xff0000, 0x000001, 0x000001, 0xff0000, 0xff0000, 0xff0000, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0xff0000, 0xffffff, 0x000001, 0x000001, 0xff0000, 0x000001, 0xff0000, 0x000001, 0xff0000, 0x000001, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0xffffff, 0xffffff, 0x000000, 0x000000, 0xff0000, 0x000000, 0xff0000, 0x000000, 0x000000, 0xff0000, 0x000001, 0x000001, 0xff0000, 0x000001, 0xff0000, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0xff0000, 0xff0000, 0x000001, 0xff0000, 0xff0000, 0xff0000, 0x000001, 0xff0000, 0x000001, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0xff0000, 0xff0000, 0xff0000, 0x000000, 0x000000, 0xff0000, 0xff0000, 0x000001, 0xff0000, 0x000001, 0xff0000, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001,
    0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001, 0x000001};
#ifndef _IMAGES_H_
#define _IMAGES_H_
const int arr_length = 3;
const int arr_width[] = {16, 48, 16};

const char32_t *arr_images[] = {NCC, CLEAR_PATH, ESU};
const bool arr_transition[] = {
    true,
    false,
    true,
};

int arr_index_img = arr_length - 1;

void handle_cycle()
{
    if (++arr_index_img >= arr_length)
    {
        arr_index_img = 0;
    }
}

const char32_t *get_image()
{
    return arr_images[arr_index_img];
}

const bool get_transition()
{
    return arr_transition[arr_index_img];
}
#endif