/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUFeedBlueprint : NSObject {
    NSMutableArray * _sections;
}

@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (nonatomic, readonly) unsigned long long numberOfSections;
@property (nonatomic, readonly) NSMutableArray *sections;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)sections;

@end
