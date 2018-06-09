/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAObjectListEntry : NSObject {
    <SASerializable> * _instance;
    unsigned long long  _size;
}

@property (retain) <SASerializable> *instance;
@property unsigned long long size;

- (void).cxx_destruct;
- (id)instance;
- (void)setInstance:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
