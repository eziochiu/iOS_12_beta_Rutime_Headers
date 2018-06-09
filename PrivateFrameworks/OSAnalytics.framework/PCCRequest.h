/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface PCCRequest : NSObject {
    id /* block */  _callback;
    NSString * _jid;
    NSDictionary * _options;
    NSString * _type;
}

@property (copy) id /* block */ callback;
@property (readonly) NSString *jid;
@property (readonly) NSDictionary *options;
@property (readonly) NSString *type;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)description;
- (id)initWithID:(id)arg1 type:(id)arg2 options:(id)arg3;
- (id)jid;
- (id)options;
- (void)setCallback:(id /* block */)arg1;
- (id)type;

@end
