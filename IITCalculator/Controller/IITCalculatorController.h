//
//  IITCalculatorController.h
//  NZKeyboard
//
//  Created by Kevin Nick on 2012-11-9.
//  Copyright (c) 2012年 com.zen. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "StatisticsController.h"
#import "MapController.h"
#import "SettingsController.h"
#import "HistoryController.h"

#import "IITCalculator.h"

@interface IITCalculatorController : UIViewController <UITextFieldDelegate, MapControllerDelegate> {

}

// outlets
@property (nonatomic, strong) ZenKeyboard *keyboardView;
@property (nonatomic, strong) ZenTextField *tfPreTaxIncome;
@property (nonatomic, strong) UIButton *lbCity;

@property (nonatomic, strong) IITCalculator *calculator;

@end
