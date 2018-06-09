/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentLogger : NSObject <SXWebContentLogger> {
    NSMutableDictionary * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *values;

- (void).cxx_destruct;
- (void)bindValue:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)log:(id)arg1;
- (id)values;

@end
