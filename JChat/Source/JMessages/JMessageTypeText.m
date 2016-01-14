//
//  JMessageTypeText.m
//  JChat
//
//  Created by Jana on 1/11/16.
//  Copyright © 2016 khacvv. All rights reserved.
//

#import "JMessageTypeText.h"

@implementation JMessageTypeText

- (instancetype)initWithSenderID:(NSString *)senderID displayName:(NSString *)displayName textMessage:(NSString *)textMessage mediaData:(NSData *)mediaData {
    self.senderID = senderID;
    self.senderDisplayName = displayName;
    self.textMessage = textMessage;
    self.mediaData = mediaData;
    return self;
}
@end
