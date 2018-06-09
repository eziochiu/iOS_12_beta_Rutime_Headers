/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKBRTTouchHistory : NSObject <NSCopying> {
    NSMutableArray * _history;
    struct CGPoint { 
        double x; 
        double y; 
    }  _historyOffset;
    bool  _isLeftHand;
    double  _lastDecayTime;
}

@property (nonatomic, readonly) bool hasHistory;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } historyOffset;
@property (nonatomic) bool isLeftHand;
@property (nonatomic, readonly) double lastTime;

- (void).cxx_destruct;
- (void)_decayHistoryToSize:(unsigned long long)arg1;
- (void)_sortHistory;
- (void)_updateOffset;
- (void)addInfo:(id)arg1;
- (void)adjustHistoryOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)clearHistory;
- (bool)containsInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)decayHistory;
- (bool)hasHistory;
- (struct CGPoint { double x1; double x2; })historyOffset;
- (id)initWithIsLeftHand:(bool)arg1;
- (bool)isLeftHand;
- (double)lastTime;
- (void)removeInfo:(id)arg1;
- (void)reset;
- (void)setIsLeftHand:(bool)arg1;

@end