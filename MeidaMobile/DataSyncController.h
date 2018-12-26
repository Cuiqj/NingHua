//
//  ServerSettingController.h
//  GDRMMobile
//
//  Created by yu hongwu on 12-2-29.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DataDownLoad.h"
#import "DataUpLoad.h"

@interface  DataSyncController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *uibuttonInit;
@property (weak, nonatomic) IBOutlet UIButton *uibuttonReset;
@property (weak, nonatomic) IBOutlet UIButton *uibuttonUpload;
@property (weak, nonatomic) IBOutlet UILabel *versionName;
@property (weak, nonatomic) IBOutlet UILabel *versionTime;
@property (weak, nonatomic) IBOutlet UIButton *updateDocFormatBtn;
- (IBAction)btnInitData:(id)sender;
- (IBAction)btnUpLoadData:(UIButton *)sender;
@property (weak, nonatomic) IBOutlet UIButton *setServerBtn;
- (IBAction)btnUpdateDocFormat:(UIButton *)sender;


@end
