/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETColorStore : NSObject {
    NSMutableArray * _colors;
    unsigned long long  _selectedColorIndex;
    bool  _selectedIndexLoaded;
}

@property (nonatomic, readonly) NSArray *colors;
@property (nonatomic) unsigned long long selectedColorIndex;

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)_colors;
- (void)addDefaultsObserver;
- (id)colors;
- (void)dealloc;
- (void)defaultsChanged:(id)arg1;
- (id)init;
- (void)saveColor:(id)arg1 forIndex:(unsigned long long)arg2;
- (unsigned long long)selectedColorIndex;
- (void)setSelectedColorIndex:(unsigned long long)arg1;

@end
