//
//  PhotosTableViewCell.h
//  Tumblr Feed
//
//  Created by Mariana Martinez on 25/06/20.
//  Copyright © 2020 Mariana Martinez. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PhotosTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *photoCellView;

@property (weak, nonatomic) IBOutlet UILabel *dateLabel;


@end

NS_ASSUME_NONNULL_END
