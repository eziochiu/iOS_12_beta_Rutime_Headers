/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {
    NSArray * _inactiveLines;
}

@property (nonatomic, readonly) NSArray *inactiveLines;

- (void).cxx_destruct;
- (void)_buildRows;
- (id)_pagingFilter;
- (void)_setNeedsBuildRows;
- (id)inactiveLines;
- (id)init;

@end
