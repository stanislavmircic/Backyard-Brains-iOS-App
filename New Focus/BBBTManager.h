//
//  BBBTManager.h
//  Backyard Brains
//
//  Created by Stanislav Mircic on 5/24/14.
//  Copyright (c) 2014 Datta Lab, Harvard University. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ExternalAccessory/ExternalAccessory.h>
typedef void (^BBBTInputBlock)(float *data, UInt32 numFrames, UInt32 numChannels);

@interface BBBTManager : NSObject  <EAAccessoryDelegate, NSStreamDelegate>

+ (BBBTManager *) btManager; //singleton

- (void)setInputBlock:(BBBTInputBlock)block;
@property (nonatomic, copy) BBBTInputBlock inputBlock;

- (float) currentBaudRate;

-(void) startBluetooth;

@end