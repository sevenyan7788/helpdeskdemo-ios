//
//  SCAudioPlay.h
//  CustomerSystem-ios
//
//  Created by __阿彤木_ on 16/11/10.
//  Copyright © 2016年 easemob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@protocol SCAudioPlayDelegate <NSObject>

- (void)AVAudioPlayerBeiginPlay;
- (void)AVAudioPlayerDidFinishPlay;

@end

@interface SCAudioPlay : NSObject
@property (nonatomic ,strong) AVAudioPlayer *player;
@property (nonatomic ,assign) id<SCAudioPlayDelegate>delegate;
@property(nonatomic,assign,getter=isPlaying) BOOL playing;
+ (instancetype)sharedInstance;

-(void)playSongWithUrl:(NSString *)songUrl;
-(void)playSoundWithData:(NSData *)soundData;
- (void)stopSound;
@end
