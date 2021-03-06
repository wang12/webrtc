// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from audio_mixer.djinni

#pragma once

#include "modules/backing_track/mixer_source.h"
#include <cstdint>
#include <utility>
#include <vector>

namespace webrtc {

struct MixerConfig final {
    std::vector<MixerSource> sources;
    int32_t output_sample_rate;
    int32_t output_channel_num;
    int32_t frame_duration_us;
    bool enable_music_sync_fix;
    int32_t waiting_mix_delay_frames;

    MixerConfig(std::vector<MixerSource> sources_,
                int32_t output_sample_rate_,
                int32_t output_channel_num_,
                int32_t frame_duration_us_,
                bool enable_music_sync_fix_,
                int32_t waiting_mix_delay_frames_)
    : sources(std::move(sources_))
    , output_sample_rate(std::move(output_sample_rate_))
    , output_channel_num(std::move(output_channel_num_))
    , frame_duration_us(std::move(frame_duration_us_))
    , enable_music_sync_fix(std::move(enable_music_sync_fix_))
    , waiting_mix_delay_frames(std::move(waiting_mix_delay_frames_))
    {}
};

}  // namespace audio_mixer
