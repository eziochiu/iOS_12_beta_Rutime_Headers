/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLResult : NSObject {
    NSError * _error;
    id  _result;
}

@property (readonly, copy) NSError *error;
@property (readonly) bool isFailure;
@property (readonly) bool isSuccess;
@property (readonly) id result;

+ (id)failureWithError:(id)arg1;
+ (id)successWithResult:(id)arg1;

- (void).cxx_destruct;
- (id)error;
- (id)initWithResult:(id)arg1 error:(id)arg2;
- (bool)isFailure;
- (bool)isSuccess;
- (id)result;
- (id)resultWithError:(id*)arg1;

@end
