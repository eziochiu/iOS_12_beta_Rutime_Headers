/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDebugContext : NSObject {
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, retain) NSDate *simulatedDate;
@property (nonatomic, readonly) long long time;

+ (id)defaultDebugContext;

- (bool)boolForName:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)eval:(id)arg1;
- (id)init;
- (int)intForName:(id)arg1;
- (bool)isFlagSet:(id)arg1;
- (id)performSelectorForName:(id)arg1;
- (id)performSelectorForName:(id)arg1 withObject:(id)arg2;
- (void)removeValueForName:(id)arg1;
- (void)setBool:(bool)arg1 forName:(id)arg2;
- (void)setDelegate:(id)arg1 andSelector:(SEL)arg2 forName:(id)arg3;
- (void)setFlag:(id)arg1;
- (void)setInt:(int)arg1 forName:(id)arg2;
- (void)setSimulatedDate:(id)arg1;
- (void)setValue:(id)arg1 forName:(id)arg2;
- (id)simulatedDate;
- (long long)time;
- (id)valueForName:(id)arg1;

@end
