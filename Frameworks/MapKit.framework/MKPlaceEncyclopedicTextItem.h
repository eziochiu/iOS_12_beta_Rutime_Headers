/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceEncyclopedicTextItem : NSObject <MKPlaceEncyclopedicRowViewItem> {
    NSString * label;
    NSString * value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *value;

+ (id)textItemWithLabel:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)label;
- (id)value;

@end
