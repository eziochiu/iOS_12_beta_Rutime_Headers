/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _RERoutineData : NSObject <REIndentedDescription> {
    NSArray * _locationsOfInterest;
    long long  _mode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *locationsOfInterest;
@property (nonatomic) long long mode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)locationsOfInterest;
- (long long)mode;
- (void)setLocationsOfInterest:(id)arg1;
- (void)setMode:(long long)arg1;

@end
