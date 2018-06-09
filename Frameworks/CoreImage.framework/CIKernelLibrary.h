/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIKernelLibrary : NSObject {
    NSObject<OS_dispatch_data> * _data;
    <MTLLibrary> * _library;
}

@property (readonly) unsigned long long functionCount;

+ (id)internalLibraryWithName:(id)arg1 device:(id)arg2;
+ (id)libraryWithData:(id)arg1 error:(id*)arg2;

- (void)dealloc;
- (id)externFunctionNames;
- (unsigned long long)functionCount;
- (id)functionWithName:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)newFunctionWithName:(id)arg1 device:(id)arg2;

@end
