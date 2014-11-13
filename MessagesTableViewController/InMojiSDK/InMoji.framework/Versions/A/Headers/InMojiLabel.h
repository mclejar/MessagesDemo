//
//  InMojiLabel.h
//  InMoji
//
//  Created by Fogg, Daniel on 5/31/14.
//  Copyright (c) 2014 Fogg, Daniel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DTCoreText.h"

@class InMojiLabel;

@protocol InMojiMessageLabelDelegate <NSObject>

- (UIView*) viewForInMojiActionDisplay;

@optional
- (void) inMojiLabelDidUpdateAttributedText:(InMojiLabel*)label forBoundingRect:(CGRect)boundingRect;

@end

@interface InMojiLabel : DTAttributedTextContentView

@property (nonatomic ,strong) NSString *orignText;
@property (nonatomic ,strong) UIFont *font;
@property (nonatomic ,strong) NSString *text;
@property (weak, nonatomic) id<InMojiMessageLabelDelegate> messageDelegate;

@end
