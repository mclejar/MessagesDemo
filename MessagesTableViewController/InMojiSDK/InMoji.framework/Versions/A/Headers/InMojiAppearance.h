//
//  InMojiAppearance.h
//  InMoji
//
//  Created by Fogg, Daniel on 7/15/14.
//  Copyright (c) 2014 Fogg, Daniel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface InMojiAppearance : NSObject

@property (nonatomic, strong) UIColor* popupBorderColor;        //border color around inmoji selection popup and inmoji action popup
@property (nonatomic, strong) UIColor* popupBackgroundColor;    //background color for inmoji selection popup and inmoji action popup
@property (nonatomic, strong) UIColor* popupArrowColor;         //arrow color for inmoji selection popup and inmoji action popup
@property (nonatomic, strong) UIColor* titleTextColor;          //text color for inmoji title text labels, such as location view title header
@property (nonatomic, strong) UIColor* itemMainTextColor;       //text color for inmoji selection item main text label, for instance location address text
@property (nonatomic, strong) UIFont*  itemMainFont;            //font for inmoji item main text label, for instance location address text
@property (nonatomic, strong) UIColor* itemDetailTextColor;     //text color for inmoji selection item auxiliary text label, for instance location distance text
@property (nonatomic, strong) UIFont*  itemDetailFont;          //font for inmoji selecionitem auxiliary text label, for instance location distance text
@property (nonatomic, strong) UIImage* itemTypeImageSelected;   //image to use for inmoji selection item left image for selected state
@property (nonatomic, strong) UIImage* itemTypeImageDeselected; //image to use for inmoji selection item left image for deselected state

+ (InMojiAppearance *)sharedAppearance;

@end
