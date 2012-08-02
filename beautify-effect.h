/**
 * Copyright (C) 2012 hejian <hejian.he@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

typedef enum
{
  BEAUTIFY_EFFECT_NONE,
  BEAUTIFY_EFFECT_SOFT_LIGHT,
  BEAUTIFY_EFFECT_WARM,
  BEAUTIFY_EFFECT_SHARPEN,
  BEAUTIFY_EFFECT_SOFT,
  BEAUTIFY_EFFECT_REMOVE_FOG, // TODO
  BEAUTIFY_EFFECT_STRONG_CONTRAST,
  BEAUTIFY_EFFECT_SMART_COLOR,
  BEAUTIFY_EFFECT_FULL_COLOR, // TODO
  BEAUTIFY_EFFECT_BLACK_AND_WHITE,
  BEAUTIFY_EFFECT_INVERT,
  BEAUTIFY_EFFECT_NOISE, // TODO

  BEAUTIFY_EFFECT_CLASSIC_LOMO,
  BEAUTIFY_EFFECT_RETRO_LOMO,
  BEAUTIFY_EFFECT_GOTHIC_STYLE,
  BEAUTIFY_EFFECT_FILM,
  BEAUTIFY_EFFECT_HDR,
  BEAUTIFY_EFFECT_CLASSIC_HDR,
  BEAUTIFY_EFFECT_REVERSE_COLOR, // TODO
  BEAUTIFY_EFFECT_TIME_TUNNEL, // TODO
  BEAUTIFY_EFFECT_AFTER_THE_YOUTH, // TODO
  BEAUTIFY_EFFECT_AXIS_LENS, // TODO
  BEAUTIFY_EFFECT_YELLOWING_DARK_CORNERS,
  BEAUTIFY_EFFECT_OLD_DAYS, // TODO
  BEAUTIFY_EFFECT_NOSTALGIA, // TODO
  BEAUTIFY_EFFECT_IMPRESSION,
  BEAUTIFY_EFFECT_DEEP_BLUE_TEAR_RAIN,
  BEAUTIFY_EFFECT_PURPLE_SENSATION,
  BEAUTIFY_EFFECT_BRONZE,
  BEAUTIFY_EFFECT_COOL_COLORS, // TODO
  BEAUTIFY_EFFECT_RECALL,
  BEAUTIFY_EFFECT_RETRO_BLACK_AND_WHITE, // TODO
  BEAUTIFY_EFFECT_COLORFUL_LOMO, // TODO

  BEAUTIFY_EFFECT_ELEGANT,
  BEAUTIFY_EFFECT_LITTLE_FRESH,
  BEAUTIFY_EFFECT_CLASSIC_STUDIO,
  BEAUTIFY_EFFECT_RETRO,
  BEAUTIFY_EFFECT_PINK_LADY,
  BEAUTIFY_EFFECT_ABAO_COLOR,
  BEAUTIFY_EFFECT_ICE_SPIRIT,
  BEAUTIFY_EFFECT_MATTE_FINISH_STYLE, // TODO
  BEAUTIFY_EFFECT_JAPANESE_STYLE,
  BEAUTIFY_EFFECT_NEW_JAPANESE_STYLE,
  BEAUTIFY_EFFECT_MILK,
  BEAUTIFY_EFFECT_FLEETING_TIME, // TODO
  BEAUTIFY_EFFECT_CLOUD, // TODO
  BEAUTIFY_EFFECT_OLD_PHOTOS,
  BEAUTIFY_EFFECT_WARM_YELLOW,
  BEAUTIFY_EFFECT_BLUES,
  BEAUTIFY_EFFECT_COLD_BLUE,
  BEAUTIFY_EFFECT_COLD_GREEN,
  BEAUTIFY_EFFECT_PURPLE_FANTASY,
  BEAUTIFY_EFFECT_COLD_PURPLE,

  BEAUTIFY_EFFECT_BRIGHT_RED,
  BEAUTIFY_EFFECT_CHRISTMAS_EVE,
  BEAUTIFY_EFFECT_SNOW, // TODO
  BEAUTIFY_EFFECT_NIGHT_VIEW,
  BEAUTIFY_EFFECT_ASTRAL,
  BEAUTIFY_EFFECT_COLORFUL_GLOW,
  BEAUTIFY_EFFECT_BACKLIGHT, // TODO
  BEAUTIFY_EFFECT_PICK_LIGHT,
  BEAUTIFY_EFFECT_COLORFUL, // TODO
  BEAUTIFY_EFFECT_HEART_SHAPED_HALO, // TODO
  BEAUTIFY_EFFECT_BUBBLES_GRADIENT, // TODO
  BEAUTIFY_EFFECT_GLASS_DROPS,
  BEAUTIFY_EFFECT_NEW_YEAR_ATMOSPHERE, // TODO

  BEAUTIFY_EFFECT_SKETCH,
  BEAUTIFY_EFFECT_LIFE_SKETCH,
  BEAUTIFY_EFFECT_CLASSIC_SKETCH,
  BEAUTIFY_EFFECT_COLOR_PENCIL,
  BEAUTIFY_EFFECT_TV_LINES,
  BEAUTIFY_EFFECT_BLACK_AND_WHITE_NEWSPAPER, // TODO
  BEAUTIFY_EFFECT_RELIEF,
  BEAUTIFY_EFFECT_PAINTING, // TODO

  BEAUTIFY_EFFECT_BEAM_GRADIENT,
  BEAUTIFY_EFFECT_SUNSET_GRADIENT,
  BEAUTIFY_EFFECT_COOL_GRADIENT, // TODO
  BEAUTIFY_EFFECT_BLUE_YELLOW_GRADIENT, // TODO
  BEAUTIFY_EFFECT_RAINBOW_GRADIENT,
  BEAUTIFY_EFFECT_FOUR_COLOR_GRADIENT, // TODO
  BEAUTIFY_EFFECT_PINK_PURPLE_GRADIENG,
  BEAUTIFY_EFFECT_PINK_BLUE_GRADIENT,
} BeautifyEffectType;

void run_effect (gint32 image_ID, BeautifyEffectType effect);

