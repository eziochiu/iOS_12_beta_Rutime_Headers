/* made by EzioChiu.
 */

@protocol CNAutocompleteProbeProvider <NSObject>

@required

- (<CNAutocompletePerformanceProbe> *)performanceProbe;
- (<CNAutocompleteSuggestionsProbe> *)suggestionsProbe;
- (<CNAutocompleteUsageMonitorProbe> *)usageMonitorProbe;

@end
