//
//  JMessages.h
//  JChat
//
//  Created by Jana on 1/11/16.
//  Copyright © 2016 khacvv. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMessages : NSObject

@property (strong, nonatomic) NSString *senderID;
@property (strong, nonatomic) NSString *senderDisplayName;
@property (strong, nonatomic) NSDate *date;
@property (strong, nonatomic) NSString *textMessage;
@property (strong, nonatomic) NSData *mediaData;

- (instancetype)initWithSenderID:(NSString *)senderID displayName:(NSString *)displayName createAtDate:(NSDate *)date textMessage:(NSString *)textMessage mediaData:(NSData *)mediaData;
@end
