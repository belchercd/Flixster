//
//  MovieCell.h
//  Flixster
//
//  Created by belchercd on 6/27/19.
//  Copyright © 2019 belchercd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MovieCell : UITableViewCell
//@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;
//@property (weak, nonatomic) IBOutlet UIView *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;


@end

NS_ASSUME_NONNULL_END
