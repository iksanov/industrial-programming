# Generated by Django 2.0.2 on 2018-02-24 12:09

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Task',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('task_text', models.CharField(max_length=200, verbose_name='text')),
                ('pub_date', models.DateTimeField(verbose_name='date published')),
                ('task_done', models.BooleanField(default=False, verbose_name='done_flag')),
            ],
        ),
    ]