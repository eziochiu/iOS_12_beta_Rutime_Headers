/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
 */

@interface HDDescription : NSObject <NSCopying> {
    NSDictionary * _metadata;
    NSMutableDictionary * _parameters;
    NSString * _summary;
}

@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, copy) NSString *summary;

+ (id)descriptionWithSummary:(id)arg1;

- (void).cxx_destruct;
- (void)addParameter:(id)arg1 forName:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSummary:(id)arg1;
- (id)metadata;
- (id)parameters;
- (void)setMetadata:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;
- (bool)validateAgainstValues:(id)arg1 error:(id*)arg2;

@end
