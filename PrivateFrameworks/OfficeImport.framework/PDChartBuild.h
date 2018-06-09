/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDChartBuild : PDBuild {
    int  mChartBuildType;
}

- (unsigned long long)hash;
- (id)initWithBuildType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
