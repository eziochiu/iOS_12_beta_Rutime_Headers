/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKStars : TLKFormattedTextItem {
    double  _starRating;
}

@property (nonatomic) double starRating;

- (unsigned long long)_itemType;
- (void)setStarRating:(double)arg1;
- (double)starRating;

@end
