/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRJSObject : NSObject <CRJSObjectExport> {
    id  _backingObject;
}

@property (nonatomic, readonly) id backingObject;

+ (id)objectWithClassName:(id)arg1 objectType:(id)arg2;

- (void).cxx_destruct;
- (id)_backingObjectForJSValue:(id)arg1;
- (void)_logErrorLog:(id)arg1;
- (id)backingObject;
- (id)backingObjectValueForKey:(id)arg1;
- (id)initWithClassName:(id)arg1 objectType:(long long)arg2;
- (void)setBackingObjectValue:(id)arg1 forKey:(id)arg2;

@end
