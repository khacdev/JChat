//
//  MeImageTableViewCell.h
//  JChat
//
//  Created by Jana on 1/14/16.
//  Copyright © 2016 khacvv. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MeImageTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightOfDateLayoutConstraint;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UIImageView *messageImageView;
@end
