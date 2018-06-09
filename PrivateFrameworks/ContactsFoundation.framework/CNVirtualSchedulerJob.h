/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNVirtualSchedulerJob : NSObject {
    id /* block */  _block;
    unsigned long long  _time;
}

@property (readonly, copy) id /* block */ block;
@property unsigned long long time;

+ (id)jobWithTime:(unsigned long long)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)description;
- (id)initWithTime:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)setTime:(unsigned long long)arg1;
- (unsigned long long)time;

@end
