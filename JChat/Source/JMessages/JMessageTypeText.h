//
//  JMessageTypeText.h
//  JChat
//
//  Created by Jana on 1/11/16.
//  Copyright © 2016 khacvv. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMessageTypeText : NSObject

@property (strong, nonatomic) NSString *senderID;
@property (strong, nonatomic) NSString *senderDisplayName;
@property (strong, nonatomic) NSString *textMessage;

- (instancetype)initWithSenderID:(NSString *)senderID displayName:(NSString *)displayName textMessage:(NSString *)textMessage;
@end
