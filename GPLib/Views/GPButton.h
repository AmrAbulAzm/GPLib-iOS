//
//  GPButton.h
//  GPLib
//
//  Created by Dalton Cherry on 12/19/11.
//  Copyright (c) 2011 Basement Crew/180 Dev Designs. All rights reserved.
//
/*
 http://github.com/daltoniam/GPLib-iOS
 
 Permission is hereby granted, free of charge, to any person
 obtaining a copy of this software and associated documentation
 files (the "Software"), to deal in the Software without
 restriction, including without limitation the rights to use,
 copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following
 conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.
 */
//
@class CAGradientLayer;

@interface GPButton : UIButton 
{
    BOOL isSelected;
    BOOL doesPersistent;
}

@property (nonatomic, retain) UIColor* gradientStartColor;
@property (nonatomic, retain) UIColor* gradientEndColor;
@property (nonatomic, retain) UIColor* highlightColor;
@property (nonatomic, retain) UIColor* highlightEndColor;
@property (nonatomic, assign) BOOL doesPersistent;
@property (nonatomic, readonly) BOOL isSelected;

@property (nonatomic, assign)CGFloat gradientLength;
@property (nonatomic, assign)BOOL drawGloss;
@property(nonatomic,assign)NSInteger rounding;
@property(nonatomic,retain)UIColor* fillColor;

@property(nonatomic,assign)CGFloat borderWidth;
@property(nonatomic,retain)UIColor* borderColor;

@property(nonatomic,assign)BOOL drawInsetShadow;
@property(nonatomic,assign)UIRectCorner roundCorners;

//simulates a touch of the button
-(void)swapButtonState;

+(GPButton*)defaultButton:(CGRect)frame;

@end
