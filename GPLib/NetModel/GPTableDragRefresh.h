//
//  GPTableDragRefresh.h
//  EduTalk
//
//  Created by Dalton Cherry on 10/20/11.
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
#import "GPOldModel.h"
#import "GPOldTableViewController.h"
#import "GPDragToRefreshView.h"

@class GPOldTableViewController;

@interface GPTableDragRefresh : NSObject
{
    GPDragToRefreshView* headerView;
    UIColor* Background;
    GPOldTableViewController* controller;
}
@property (nonatomic, retain)GPDragToRefreshView* headerView;

- (id)initWithController:(GPOldTableViewController*)control Background:(UIColor*)color;
- (id)initWithController:(GPOldTableViewController*)_controller;
- (void)scrollViewDidScroll:(UIScrollView*)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView*)scrollView willDecelerate:(BOOL)decelerate;
- (void)RequestFinished;
- (void)RequestFailed;
@end
