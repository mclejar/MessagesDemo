//
//  InMojiRichTextEditor.h
//  InMoji
//
//  Created by Fogg, Daniel on 7/17/14.
//  Copyright (c) 2014 Fogg, Daniel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InMojiCampaign.h"

@protocol InMojiInputDelegate <NSObject>

- (UIView*) viewForInMojiSelectorDisplay;
- (CGPoint) originForInMojiSelectorDisplay;
- (CGFloat) heightForInMojiSelectorDisplay;

@end

@protocol InMojiSelectionDelegate <NSObject>

- (BOOL) handleInMojiSelection:(InMojiCampaign*)campaign;

@end

@interface InMojiInputView : UIView

@property (strong, nonatomic) UIFont* font;
@property (nonatomic, assign) NSInteger maxLines;
@property (nonatomic, weak) id<InMojiInputDelegate> inmojiDelegate;
@property (nonatomic, weak) id<InMojiSelectionDelegate> selectionDelegate;

- (void) closeInMojiSelector;
- (NSString*) textContent;
- (void) setTextContent:(NSString*)content;

@end
