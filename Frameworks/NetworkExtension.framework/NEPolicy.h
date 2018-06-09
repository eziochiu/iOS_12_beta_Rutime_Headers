/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPolicy : NSObject <NEPrettyDescription> {
    NSArray * _conditions;
    unsigned int  _order;
    NEPolicyResult * _result;
}

@property (copy) NSArray *conditions;
@property unsigned int order;
@property (retain) NEPolicyResult *result;

- (void).cxx_destruct;
- (bool)addTLVsToMessage:(id)arg1;
- (id)conditions;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)init;
- (id)initWithOrder:(unsigned int)arg1 result:(id)arg2 conditions:(id)arg3;
- (unsigned int)order;
- (id)result;
- (void)setConditions:(id)arg1;
- (void)setOrder:(unsigned int)arg1;
- (void)setResult:(id)arg1;
- (bool)validate;

@end
