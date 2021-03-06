//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//


#import <UIKit/UIKit.h>

@class Book;
@class StarRatingView;

@interface TargetOverlayView : UIView
{
}

@property (nonatomic, retain) IBOutlet UILabel * titleLabel;
@property (nonatomic, retain) IBOutlet UILabel * authorsLabel;
@property (nonatomic, retain) IBOutlet UILabel * ratingsLabel;
@property (nonatomic, retain) IBOutlet UILabel * priceLabel;
@property (nonatomic, retain) IBOutlet UILabel * oldPriceLabel;
@property (nonatomic, retain) IBOutlet UIImageView * bookCoverImageView;
@property (nonatomic, retain) IBOutlet UIView * priceContainerView;

@property (nonatomic, retain) IBOutlet StarRatingView * starRatingView;

- (void)setBook:(Book *)book;

@end
