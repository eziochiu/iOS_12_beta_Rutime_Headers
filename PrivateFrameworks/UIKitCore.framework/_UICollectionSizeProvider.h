/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionSizeProvider : NSObject <_UICollectionSizeProviding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedSize;
    long long  _fixedSizeCount;
    NSArray * _sizes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } fixedSize;
@property (nonatomic) long long fixedSizeCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *sizes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasFixedSizeCount;
- (long long)count;
- (struct CGSize { double x1; double x2; })fixedSize;
- (long long)fixedSizeCount;
- (bool)indexIsValid:(long long)arg1;
- (id)initWithFixedSize:(struct CGSize { double x1; double x2; })arg1 count:(long long)arg2;
- (id)initWithSizeProvider:(id)arg1 offset:(long long)arg2;
- (id)initWithSizes:(id)arg1;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFixedSizeCount:(long long)arg1;
- (void)setSizes:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForIndex:(long long)arg1;
- (id)sizes;

@end
