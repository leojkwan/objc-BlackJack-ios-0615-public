//
//  FISPlayingCard.h
//  BlackJack
//
//  Created by Leo Kwan on 6/10/15.
//  Copyright (c) 2015 Flatiron School. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FISPlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property ( nonatomic) NSInteger* rank;
@property(nonatomic) NSInteger cardNumber;
@property(strong, nonatomic) NSString *brand;


@end
