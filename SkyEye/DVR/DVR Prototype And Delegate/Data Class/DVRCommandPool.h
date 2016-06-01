//
//  DVRCommandPool.h
//  SkyEye
//
//  Created by Chia-Cheng Hsu on 2016/2/15.
//  Copyright © 2016年 Nuvoton. All rights reserved.
//

#import <Foundation/Foundation.h>

enum{
    VIDEO_COMMAND_LIST_TAG = 700,
    AUDIO_COMMAND_LIST_TAG,
    INFO_COMMAND_LIST_TAG,
    RECORD_COMMAND_LIST_TAG,
    FILE_COMMAND_LIST_TAG,
    CONFIG_COMMAND_LIST_TAG,
    SYSTEM_COMMAND_LIST_TAG,
    MULTICAST_COMMAND_LIST_TAG
};

@interface DVRCommandPool : NSObject{
}

@property (nonatomic, strong) NSArray *arrayVideoCommandList;
@property (nonatomic, strong) NSArray *arrayAudioCommandList;
@property (nonatomic, strong) NSArray *arrayInfoCommandList;
@property (nonatomic, strong) NSArray *arrayRecordCommandList;
@property (nonatomic, strong) NSArray *arrayFileCommandList;
@property (nonatomic, strong) NSArray *arrayConfigCommandList;
@property (nonatomic, strong) NSArray *arraySystemCommandList;
@property (nonatomic, strong) NSArray *arrayMulticastCommandList;

- (id)init;
+ (DVRCommandPool *) sharedInstance;

@end
