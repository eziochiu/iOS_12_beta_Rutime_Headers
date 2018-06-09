/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFCoder : NSObject {
    id  _coderInternal;
}

@property (nonatomic, copy) SFCodingOptions *options;

- (void).cxx_destruct;
- (id)encodeTopLevelValue:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;

@end
