/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPSerializedDataHarvester : NSObject <_CDPDataHarvester> {
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setUrl:(id)arg1;
- (id)url;

@end
